//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGDiscoveryGridTitleConfig, IGKeywordSearchGridNetworkContext, IGKeywordSearchModel, IGSessionTracker, NSString;

@interface IGKeywordSearchGridUserIntentTarget : NSObject <FBIntentTarget>
{
    IGSessionTracker *_searchSessionTracker;
    IGKeywordSearchGridNetworkContext *_networkContextProvider;
    IGDiscoveryGridTitleConfig *_titleConfig;
    IGKeywordSearchModel *_keyword;
    NSString *_query;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) IGKeywordSearchModel *keyword; // @synthesize keyword=_keyword;
@property(readonly, nonatomic) IGDiscoveryGridTitleConfig *titleConfig; // @synthesize titleConfig=_titleConfig;
@property(readonly, nonatomic) IGKeywordSearchGridNetworkContext *networkContextProvider; // @synthesize networkContextProvider=_networkContextProvider;
@property(readonly, nonatomic) IGSessionTracker *searchSessionTracker; // @synthesize searchSessionTracker=_searchSessionTracker;
- (id)initWithSearchSessionTracker:(id)arg1 networkContextProvider:(id)arg2 titleConfig:(id)arg3 keyword:(id)arg4 query:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
