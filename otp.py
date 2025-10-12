import random

def generate_otp(length=6):
    """Generate a random OTP of specified length."""
    if length <= 0:
        raise ValueError("Length must be a positive integer.")
    digits = "0123456789"
    otp = ''.join(random.choice(digits) for _ in range(length))
    return otp

otp=generate_otp()
print("Your OTP is:", otp)