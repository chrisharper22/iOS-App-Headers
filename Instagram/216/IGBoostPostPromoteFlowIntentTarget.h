//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGBoostPostLogger, NSString, UIViewController;

@interface IGBoostPostPromoteFlowIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _isSubflow;
    _Bool _isCTWAUpsellTip;
    NSString *_mediaId;
    NSString *_couponOfferId;
    UIViewController *_fromViewController;
    IGBoostPostLogger *_logger;
    long long _entryPoint;
    long long _destinationSurface;
    NSString *_aymtChannel;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) _Bool isCTWAUpsellTip; // @synthesize isCTWAUpsellTip=_isCTWAUpsellTip;
@property(readonly, nonatomic) NSString *aymtChannel; // @synthesize aymtChannel=_aymtChannel;
@property(readonly, nonatomic) long long destinationSurface; // @synthesize destinationSurface=_destinationSurface;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGBoostPostLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) NSString *couponOfferId; // @synthesize couponOfferId=_couponOfferId;
@property(readonly, nonatomic) _Bool isSubflow; // @synthesize isSubflow=_isSubflow;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)initWithMediaId:(id)arg1 isSubflow:(_Bool)arg2 couponOfferId:(id)arg3 fromViewController:(id)arg4 logger:(id)arg5 entryPoint:(long long)arg6 destinationSurface:(long long)arg7 aymtChannel:(id)arg8 isCTWAUpsellTip:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
