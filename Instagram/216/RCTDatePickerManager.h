//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTDatePickerManager : RCTViewManager
{
}

+ (id)propConfig_pickerStyle;
+ (const struct RCTMethodInfo *)__rct_export__630;
+ (id)propConfig_timeZoneOffsetInMinutes;
+ (id)propConfig_mode;
+ (id)propConfig_onChange;
+ (id)propConfig_minuteInterval;
+ (id)propConfig_maximumDate;
+ (id)propConfig_minimumDate;
+ (id)propConfig_locale;
+ (id)propConfig_date;
+ (void)load;
+ (id)moduleName;
- (void)set_pickerStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)setNativeDate:(id)arg1 toDate:(id)arg2;
- (id)view;

@end

