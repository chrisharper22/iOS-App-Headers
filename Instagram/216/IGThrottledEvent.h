//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGThrottledEvent : NSObject
{
    NSString *_userDefaultsKey;
    long long _numEvents;
    long long _numDays;
}

- (void).cxx_destruct;
- (void)performBlockIfAppropriate:(CDUnknownBlockType)arg1;
- (id)initWithUniqueID:(id)arg1 eventsUntilPrompt:(long long)arg2 daysUntilPromptAgain:(long long)arg3 firstDate:(id)arg4;

@end
