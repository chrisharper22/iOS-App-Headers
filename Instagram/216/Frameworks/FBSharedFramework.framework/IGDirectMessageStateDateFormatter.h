//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;
@protocol IGUserLauncherSetProviding;

@interface IGDirectMessageStateDateFormatter : NSObject
{
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    NSDateFormatter *_seenDateFormatter;
    NSDateFormatter *_deliveredDateFormatter;
    NSDateFormatter *_receivedDateFormatter;
    NSDateFormatter *_failedDateFormatter;
}

- (void).cxx_destruct;
- (id)failedStringForDate:(id)arg1;
- (id)receivedStringForDate:(id)arg1;
- (id)sentStringForDate:(id)arg1 context:(long long)arg2;
- (id)deliveredStringForDate:(id)arg1 context:(long long)arg2;
- (id)seenStringForDate:(id)arg1 context:(long long)arg2;
- (id)initWithLauncherSetProvider:(id)arg1;

@end

