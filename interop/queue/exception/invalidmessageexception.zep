
namespace Interop\Queue\Exception;

class InvalidMessageException extends Exception
{
    /**
     * @param Message $message
     * @param string  $class
     *
     * @throws static
     */
    public static function assertMessageInstanceOf(var message, string className) -> void
    {
        var name;

        if !(message instanceof className) {
            let name = get_class(message);

            throw new InvalidMessageException(
                "The message must be an instance of " . className . " but it is " . name . "."
            );
        }
    }
}
