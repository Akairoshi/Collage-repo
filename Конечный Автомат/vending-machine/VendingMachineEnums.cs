
namespace vending_machine
{
    public enum VendingState
    {
        Idle,
        WaitingForPayment,
        Dispensing
    }
    public enum VendingEvent
    {
        InsertCoin,
        SelectProduct,
        DispenseProduct,
        Cancel
    }
}
