Vehicle Store Management System
توضیح پروژه
این پروژه یک سامانه برای مدیریت فروش و اجاره وسایل نقلیه است که با زبان C++ طراحی و پیاده‌سازی شده. هدف اصلی این پروژه آشنایی با مفاهیم چندشکلی (Polymorphism)، کلاس‌های انتزاعی (Abstract Classes)، ارث‌بری (Inheritance) و لیست‌های پیوندی (Linked Lists) در C++ می‌باشد.

ویژگی‌ها
پشتیبانی از اضافه کردن وسایل نقلیه مختلف:

خودرو (Car) - فقط قابلیت فروش.

موتور (Motorcycle) - قابلیت فروش و اجاره.

دوچرخه (Bicycle) - فقط قابلیت اجاره.

قابلیت فروش وسایل نقلیه.

قابلیت اجاره وسایل نقلیه همراه با محاسبه قیمت بر اساس تعداد روزهای اجاره.

جلوگیری از اجاره مجدد وسایل در حال اجاره.

قابلیت نمایش مشخصات تمامی وسایل نقلیه.

قابلیت تست عملکرد هر وسیله نقلیه با استفاده از تابع drive().

استفاده از چندشکلی برای انجام عملیات فروش یا اجاره.

مدیریت آیتم‌ها به کمک یک لیست پیوندی.

ساختار پروژه

VehicleStore/
├── main.cpp
├── Vehicle.h / Vehicle.cpp
├── Sell.h / Sell.cpp
├── Rent.h / Rent.cpp
├── Car.h / Car.cpp
├── Motorcycle.h / Motorcycle.cpp
├── Bicycle.h / Bicycle.cpp
├── Node.h
├── LinkedList.h
├── README.md
توضیح کلاس‌ها
Vehicle: کلاس انتزاعی پایه برای تمامی وسایل نقلیه.

Sell: رابط (interface) برای وسایلی که قابلیت فروش دارند.

Rent: رابط (interface) برای وسایلی که قابلیت اجاره دارند.

Car: پیاده‌سازی خودرو، فقط قابلیت فروش.

Motorcycle: پیاده‌سازی موتور، قابلیت فروش و اجاره.

Bicycle: پیاده‌سازی دوچرخه، فقط قابلیت اجاره.

Node: یک گره از لیست پیوندی شامل اشاره‌گر به وسیله نقلیه.

LinkedList: مدیریت مجموعه وسایل نقلیه در یک لیست پیوندی.

نحوه اجرای پروژه
ابتدا مخزن پروژه را کلون یا دانلود کنید.

پروژه را با یک کامپایلر استاندارد C++ (مانند g++) کامپایل کنید:

g++ main.cpp Vehicle.cpp Sell.cpp Rent.cpp Car.cpp Motorcycle.cpp Bicycle.cpp -o VehicleStore

برنامه را اجرا کنید:
./VehicleStore

نکات فنی
در تمامی کلاس‌های دارای ارث‌بری، دستور virtual برای متدها و به ویژه دستورات destructor رعایت شده تا از مشکلات حافظه جلوگیری شود.

برای جلوگیری از کپی‌های ناخواسته، در صورت نیاز از قوانین مدیریت حافظه (Rule of Three) استفاده شده است.

فروش موفق باعث حذف آیتم از لیست پیوندی می‌شود.

هنگام اجاره یک آیتم، اگر آیتم قبلاً اجاره داده شده باشد، اجاره مجدد مجاز نیست.

هدف‌های آموزشی
تسلط بر مفاهیم شیءگرایی پیشرفته در ++C.

درک بهتر چندشکلی (Polymorphism) و تبدیل نوع در زمان اجرا (dynamic_cast).

پیاده‌سازی پروژه‌های واقعی با ساختار ماژولار.

کار با لیست‌های پیوندی دستی در C++ بدون استفاده از کتابخانه‌های آماده.