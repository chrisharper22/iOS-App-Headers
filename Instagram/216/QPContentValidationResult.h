//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QPContentValidationResult : NSObject
{
    _Bool _isPassing;
    NSString *_failingReason;
    NSDictionary *_extraData;
}

- (void).cxx_destruct;
- (id)convertToEligibilityResult;
- (id)initWithIsPassing:(_Bool)arg1 failingReason:(id)arg2 extraData:(id)arg3;

@end

