//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGAsyncTask;
@protocol IGMediaAssetRenderer;

@protocol IGMediaAsset <NSObject>
@property(readonly, nonatomic) IGAsyncTask *ig_preferredTransform;
@property(readonly, nonatomic) _Bool ig_isLoopable;
@property(readonly, nonatomic) double ig_mediaDuration;
@property(readonly, nonatomic) struct CGSize ig_mediaSize;
@property(readonly, nonatomic) IGAsyncTask *hasAudio;
- (id <IGMediaAssetRenderer>)renderer;
@end
