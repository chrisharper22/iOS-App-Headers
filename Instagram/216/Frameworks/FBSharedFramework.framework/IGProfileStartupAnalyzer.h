//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStartupAnalyzer;

@interface IGProfileStartupAnalyzer : NSObject
{
    IGStartupAnalyzer *_startupAnalyzer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)markDidCompleteProfileNetworkRequest;
- (void)markDidStartProfileNetworkRequest;
- (void)willEndOnProfile;
- (id)initWithAnalyzer:(id)arg1;

@end

