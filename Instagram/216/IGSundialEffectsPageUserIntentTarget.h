//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class FBInspirationEffectAttributionModel, IGCameraEffectConfig, NSArray, NSMutableArray, NSString;
@protocol IGSundialAudioAssetProtocol;

@interface IGSundialEffectsPageUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _useEffectButtonHidden;
    _Bool _prefersCancelButton;
    _Bool _disablesCameraAccess;
    IGCameraEffectConfig *_effectsConfig;
    NSString *_effectID;
    FBInspirationEffectAttributionModel *_effectAttributionModel;
    NSString *_mediaTapToken;
    NSString *_sourceMediaPK;
    NSString *_sourceMediaAudioClusterId;
    NSString *_sourceMediaAuthorPK;
    NSString *_sourceMediaRankingInfoToken;
    id <IGSundialAudioAssetProtocol> _sourceMediaAudioAsset;
    NSMutableArray *_mediaList;
    NSArray *_preloadedMediaPks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *preloadedMediaPks; // @synthesize preloadedMediaPks=_preloadedMediaPks;
@property(readonly, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(readonly, nonatomic) _Bool disablesCameraAccess; // @synthesize disablesCameraAccess=_disablesCameraAccess;
@property(readonly, nonatomic) _Bool prefersCancelButton; // @synthesize prefersCancelButton=_prefersCancelButton;
@property(readonly, nonatomic) _Bool useEffectButtonHidden; // @synthesize useEffectButtonHidden=_useEffectButtonHidden;
@property(readonly, nonatomic) id <IGSundialAudioAssetProtocol> sourceMediaAudioAsset; // @synthesize sourceMediaAudioAsset=_sourceMediaAudioAsset;
@property(readonly, nonatomic) NSString *sourceMediaRankingInfoToken; // @synthesize sourceMediaRankingInfoToken=_sourceMediaRankingInfoToken;
@property(readonly, nonatomic) NSString *sourceMediaAuthorPK; // @synthesize sourceMediaAuthorPK=_sourceMediaAuthorPK;
@property(readonly, nonatomic) NSString *sourceMediaAudioClusterId; // @synthesize sourceMediaAudioClusterId=_sourceMediaAudioClusterId;
@property(readonly, nonatomic) NSString *sourceMediaPK; // @synthesize sourceMediaPK=_sourceMediaPK;
@property(readonly, nonatomic) NSString *mediaTapToken; // @synthesize mediaTapToken=_mediaTapToken;
@property(readonly, nonatomic) FBInspirationEffectAttributionModel *effectAttributionModel; // @synthesize effectAttributionModel=_effectAttributionModel;
@property(readonly, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(readonly, nonatomic) IGCameraEffectConfig *effectsConfig; // @synthesize effectsConfig=_effectsConfig;
- (id)initWithEffectsConfig:(id)arg1 effectID:(id)arg2 effectAttributionModel:(id)arg3 mediaTapToken:(id)arg4 sourceMediaPK:(id)arg5 sourceMediaAudioClusterId:(id)arg6 sourceMediaAuthorPK:(id)arg7 sourceMediaRankingInfoToken:(id)arg8 sourceMediaAudioAsset:(id)arg9 useEffectButtonHidden:(_Bool)arg10 prefersCancelButton:(_Bool)arg11 disablesCameraAccess:(_Bool)arg12 mediaList:(id)arg13 preloadedMediaPks:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

