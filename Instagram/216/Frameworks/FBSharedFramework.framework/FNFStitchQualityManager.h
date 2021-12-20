//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashQualitySelectorCreating-Protocol.h>

@class FNFDashQualityManager, FNFStitchContext, NSString;

@interface FNFStitchQualityManager : NSObject <FNFDashQualitySelectorCreating>
{
    FNFStitchContext *_stitchContext;
    FNFDashQualityManager *_dashQualityManager;
    _Bool _isLive;
    _Bool _isPrefetch;
    _Bool _isLatencySensitiveBroadcast;
}

- (void).cxx_destruct;
- (id)createQualitySelectorWithConfig:(struct FNFDashConfig)arg1 playlist:(id)arg2 resourceLoader:(id)arg3 bandwidthProvider:(id)arg4 playerMetadata:(id)arg5 trackType:(long long)arg6;
- (id)initWithStitchContext:(id)arg1 isLive:(_Bool)arg2 isPrefetch:(_Bool)arg3 isLatencySensitiveBroadcast:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

