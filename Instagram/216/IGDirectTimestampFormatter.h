//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectTimestampFormatterConfig, NSDateFormatter;

@interface IGDirectTimestampFormatter : NSObject
{
    NSDateFormatter *_formatter;
    IGDirectTimestampFormatterConfig *_config;
}

- (void).cxx_destruct;
- (id)dateStringWithDate:(id)arg1 todayDate:(id)arg2 timeZone:(id)arg3;
- (id)dateStringWithDate:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end
