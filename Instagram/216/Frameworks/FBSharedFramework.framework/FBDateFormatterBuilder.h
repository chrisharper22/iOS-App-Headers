//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

@interface FBDateFormatterBuilder : NSObject
{
    _Bool _printsFutureYearsAsRelative;
    _Bool _printsFutureMonthsAsRelative;
    _Bool _printsFutureWeeksAsRelative;
    _Bool _printsTomorrow;
    _Bool _printsFutureDaysAsRelative;
    _Bool _printsFutureHoursAsRelative;
    _Bool _printsFutureMinutesAsRelative;
    _Bool _printsToday;
    _Bool _printsPastSecondsAsRelative;
    _Bool _printsPastMinutesAsRelative;
    _Bool _printsPastHoursAsRelative;
    _Bool _printsYesterday;
    _Bool _printsPastDaysAsRelative;
    _Bool _printsPastWeeksAsRelative;
    _Bool _printsPastMonthsAsRelative;
    _Bool _printsPastYearsAsRelative;
    NSString *_futureYearsTemplate;
    NSString *_futureDifferentYearTemplate;
    NSString *_futureMonthsTemplate;
    NSString *_futureWeeksTemplate;
    NSString *_futureDaysTemplate;
    NSString *_futureTemplate;
    NSString *_pastDaysTemplate;
    NSString *_pastWeeksTemplate;
    NSString *_pastMonthsTemplate;
    NSString *_pastDifferentYearTemplate;
    NSString *_pastYearsTemplate;
    CDUnknownBlockType _preFormatBlock;
    CDUnknownBlockType _postFormatBlock;
    long long _relativeStringStyle;
    NSLocale *_locale;
    NSString *_defaultTemplate;
    NSString *_defaultString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defaultString; // @synthesize defaultString=_defaultString;
@property(copy, nonatomic) NSString *defaultTemplate; // @synthesize defaultTemplate=_defaultTemplate;
@property(nonatomic) __weak NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) long long relativeStringStyle; // @synthesize relativeStringStyle=_relativeStringStyle;
@property(copy, nonatomic) CDUnknownBlockType postFormatBlock; // @synthesize postFormatBlock=_postFormatBlock;
@property(copy, nonatomic) CDUnknownBlockType preFormatBlock; // @synthesize preFormatBlock=_preFormatBlock;
@property(nonatomic) _Bool printsPastYearsAsRelative; // @synthesize printsPastYearsAsRelative=_printsPastYearsAsRelative;
@property(copy, nonatomic) NSString *pastYearsTemplate; // @synthesize pastYearsTemplate=_pastYearsTemplate;
@property(copy, nonatomic) NSString *pastDifferentYearTemplate; // @synthesize pastDifferentYearTemplate=_pastDifferentYearTemplate;
@property(nonatomic) _Bool printsPastMonthsAsRelative; // @synthesize printsPastMonthsAsRelative=_printsPastMonthsAsRelative;
@property(copy, nonatomic) NSString *pastMonthsTemplate; // @synthesize pastMonthsTemplate=_pastMonthsTemplate;
@property(nonatomic) _Bool printsPastWeeksAsRelative; // @synthesize printsPastWeeksAsRelative=_printsPastWeeksAsRelative;
@property(copy, nonatomic) NSString *pastWeeksTemplate; // @synthesize pastWeeksTemplate=_pastWeeksTemplate;
@property(copy, nonatomic) NSString *pastDaysTemplate; // @synthesize pastDaysTemplate=_pastDaysTemplate;
@property(nonatomic) _Bool printsPastDaysAsRelative; // @synthesize printsPastDaysAsRelative=_printsPastDaysAsRelative;
@property(nonatomic) _Bool printsYesterday; // @synthesize printsYesterday=_printsYesterday;
@property(nonatomic) _Bool printsPastHoursAsRelative; // @synthesize printsPastHoursAsRelative=_printsPastHoursAsRelative;
@property(nonatomic) _Bool printsPastMinutesAsRelative; // @synthesize printsPastMinutesAsRelative=_printsPastMinutesAsRelative;
@property(nonatomic) _Bool printsPastSecondsAsRelative; // @synthesize printsPastSecondsAsRelative=_printsPastSecondsAsRelative;
@property(nonatomic) _Bool printsToday; // @synthesize printsToday=_printsToday;
@property(copy, nonatomic) NSString *futureTemplate; // @synthesize futureTemplate=_futureTemplate;
@property(nonatomic) _Bool printsFutureMinutesAsRelative; // @synthesize printsFutureMinutesAsRelative=_printsFutureMinutesAsRelative;
@property(nonatomic) _Bool printsFutureHoursAsRelative; // @synthesize printsFutureHoursAsRelative=_printsFutureHoursAsRelative;
@property(copy, nonatomic) NSString *futureDaysTemplate; // @synthesize futureDaysTemplate=_futureDaysTemplate;
@property(nonatomic) _Bool printsFutureDaysAsRelative; // @synthesize printsFutureDaysAsRelative=_printsFutureDaysAsRelative;
@property(nonatomic) _Bool printsTomorrow; // @synthesize printsTomorrow=_printsTomorrow;
@property(copy, nonatomic) NSString *futureWeeksTemplate; // @synthesize futureWeeksTemplate=_futureWeeksTemplate;
@property(nonatomic) _Bool printsFutureWeeksAsRelative; // @synthesize printsFutureWeeksAsRelative=_printsFutureWeeksAsRelative;
@property(copy, nonatomic) NSString *futureMonthsTemplate; // @synthesize futureMonthsTemplate=_futureMonthsTemplate;
@property(nonatomic) _Bool printsFutureMonthsAsRelative; // @synthesize printsFutureMonthsAsRelative=_printsFutureMonthsAsRelative;
@property(copy, nonatomic) NSString *futureDifferentYearTemplate; // @synthesize futureDifferentYearTemplate=_futureDifferentYearTemplate;
@property(copy, nonatomic) NSString *futureYearsTemplate; // @synthesize futureYearsTemplate=_futureYearsTemplate;
@property(nonatomic) _Bool printsFutureYearsAsRelative; // @synthesize printsFutureYearsAsRelative=_printsFutureYearsAsRelative;
- (id)build;

@end

