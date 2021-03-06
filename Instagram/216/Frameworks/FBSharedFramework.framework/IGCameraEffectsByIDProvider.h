//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCameraEffectCollectionDataProvider.h>

@class IGAREffectTargetModel, IGAREffectTargetResponse, NSArray;

@interface IGCameraEffectsByIDProvider : IGCameraEffectCollectionDataProvider
{
    IGAREffectTargetResponse *_targetResponse;
    IGAREffectTargetModel *_effectTarget;
    NSArray *_effectIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *effectIDs; // @synthesize effectIDs=_effectIDs;
@property(readonly, nonatomic) IGAREffectTargetModel *effectTarget; // @synthesize effectTarget=_effectTarget;
@property(readonly, nonatomic) IGAREffectTargetResponse *targetResponse; // @synthesize targetResponse=_targetResponse;
- (void)handleSuccessWithResult:(id)arg1 isPrefetch:(_Bool)arg2 isFetchingMore:(_Bool)arg3;
- (id)parser;
- (void)fetchMore;
- (id)params;
- (id)queryName;
- (id)initWithUserPK:(id)arg1 cacheTTL:(unsigned long long)arg2 targetIdentifier:(id)arg3 graphQLService:(id)arg4 graphQLDiskCache:(id)arg5 saveController:(id)arg6 removeController:(id)arg7 launcherSet:(id)arg8 networker:(id)arg9;
- (id)initWithUserSession:(id)arg1 cacheTTL:(unsigned long long)arg2 targetIdentifier:(id)arg3;

@end

