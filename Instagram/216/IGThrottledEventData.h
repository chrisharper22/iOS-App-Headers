//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface IGThrottledEventData : NSObject <NSCoding>
{
    NSDate *_lastPromptDate;
    long long _numEvents;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)numEvents;
- (id)lastPromptDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastPromptDate:(id)arg1 numEvents:(long long)arg2;

@end
