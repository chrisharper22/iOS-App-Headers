//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFNFVideoQualityListener-Protocol.h>

@class FNFDashRepresentationMetadata, FNFDashVideoPlayerMetadata, NSString;

@interface IGFNFSelectedQualityProvider : NSObject <IGFNFVideoQualityListener>
{
    FNFDashRepresentationMetadata *_videoSelectedQualityRepresentation;
    FNFDashRepresentationMetadata *_audioSelectedQualityRepresentation;
    FNFDashVideoPlayerMetadata *_playerMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FNFDashVideoPlayerMetadata *playerMetadata; // @synthesize playerMetadata=_playerMetadata;
@property(readonly, nonatomic) FNFDashRepresentationMetadata *audioSelectedQualityRepresentation; // @synthesize audioSelectedQualityRepresentation=_audioSelectedQualityRepresentation;
@property(readonly, nonatomic) FNFDashRepresentationMetadata *videoSelectedQualityRepresentation; // @synthesize videoSelectedQualityRepresentation=_videoSelectedQualityRepresentation;
- (void)videoQualitySelected:(id)arg1 playerMetadata:(id)arg2 trackType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

