//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNetegoFalcoLoggerExperiments, NSMutableSet;

@interface IGNetegoImpressionLogger : NSObject
{
    NSMutableSet *_loggedImpressions;
    NSMutableSet *_loggedExperimentalImpressions;
    IGNetegoFalcoLoggerExperiments *_experiments;
}

+ (void)logEventWithName:(id)arg1 netegoItem:(id)arg2 analyticsModule:(id)arg3 extraDictionary:(id)arg4 analyticsLogger:(id)arg5 launcherSet:(id)arg6;
+ (void)logHideWithNetegoItem:(id)arg1 sessionId:(id)arg2 userId:(id)arg3 position:(long long)arg4 analyticsModule:(id)arg5 userSession:(id)arg6;
- (void).cxx_destruct;
- (void)tryToLogNetegoImpression:(id)arg1 position:(unsigned long long)arg2 sessionID:(id)arg3 analyticsModule:(id)arg4 experimental:(_Bool)arg5 extraDictionary:(id)arg6 analyticsLogger:(id)arg7;
- (id)initWithExperiments:(id)arg1;

@end

