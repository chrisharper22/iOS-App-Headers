//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGStartupAnalyzer, NSArray, UIApplication;

@interface IGTVHomeStartupAnalyzer : NSObject
{
    unsigned long long _homeResponseStatus;
    long long _homeUIRenderStatus;
    unsigned long long _firstMediaLoadStatus;
    IGStartupAnalyzer *_startupAnalyzer;
    UIApplication *_application;
    _Bool _homeDidAppear;
    _Bool _homeNavigatedAway;
    _Bool _homeDidScrollDown;
    IGMedia *_firstFeedItem;
    NSArray *_firstMediaURLsToTrack;
    struct recursive_mutex _mutex;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_failureReason;
- (void)_completeColdStartIfAllDone;
- (void)markFirstMediaLoadEndedWithSuccess:(_Bool)arg1 fromCache:(_Bool)arg2;
- (_Bool)markFirstMediaLoadStartForURL:(id)arg1;
- (void)markHomeUIRenderEndedWithSuccess:(_Bool)arg1;
- (void)markHomeUIRenderStart;
- (void)markHomeRequestEndedWithSuccess:(_Bool)arg1;
- (void)markHomeResponseParseEndedWithFirstFeedItem:(id)arg1;
- (void)markHomeRequestSubmitted;
- (void)willEndOnHome;
- (void)markHomeDidScrollDown;
- (void)markHomeNavigatedAway;
- (void)markHomeViewControllerViewDidAppear;
- (id)initWithAnalyzer:(id)arg1 application:(id)arg2;

@end

