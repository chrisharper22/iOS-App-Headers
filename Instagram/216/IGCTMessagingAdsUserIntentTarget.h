//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGDirectResponseInfo, IGMedia, IGSponsoredSupportConfiguration, NSString, UIViewController;

@interface IGCTMessagingAdsUserIntentTarget : NSObject <FBIntentTarget>
{
    IGMedia *_media;
    IGDirectResponseInfo *_directResponseInfo;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    UIViewController *_sourceViewController;
    unsigned long long _ctaContext;
    CDUnknownBlockType _dismissActionBlock;
    long long _mediaPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long mediaPosition; // @synthesize mediaPosition=_mediaPosition;
@property(readonly, nonatomic) CDUnknownBlockType dismissActionBlock; // @synthesize dismissActionBlock=_dismissActionBlock;
@property(readonly, nonatomic) unsigned long long ctaContext; // @synthesize ctaContext=_ctaContext;
@property(readonly, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)initWithMedia:(id)arg1 directResponseInfo:(id)arg2 sponsoredSupportConfiguration:(id)arg3 sourceViewController:(id)arg4 ctaContext:(unsigned long long)arg5 dismissActionBlock:(CDUnknownBlockType)arg6 mediaPosition:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
