//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDiscoveryGridLoadMoreResponseType-Protocol.h"

@class IGDiscoveryGridNetworkResponse, NSArray, NSString;

@interface IGKeywordSearchGridResponse : NSObject <IGDiscoveryGridLoadMoreResponseType>
{
    IGDiscoveryGridNetworkResponse *_gridNetworkResponse;
    NSArray *_keywordRefinementModels;
    NSString *_rankToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, nonatomic) NSArray *keywordRefinementModels; // @synthesize keywordRefinementModels=_keywordRefinementModels;
@property(readonly, nonatomic) IGDiscoveryGridNetworkResponse *gridNetworkResponse; // @synthesize gridNetworkResponse=_gridNetworkResponse;
- (id)maxId;
- (id)initWithGridNetworkResponse:(id)arg1 keywordRefinementModels:(id)arg2 rankToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

