//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGVideoComposition, NSArray, NSString;
@protocol IGTVShoppingPinnedProductEditorViewControllerDelegate;

@interface IGTVShoppingPinnedProductEditorUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _showSkipButton;
    NSArray *_taggedProducts;
    IGVideoComposition *_videoComposition;
    NSArray *_pinnedProductInfo;
    NSString *_mediaPk;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    NSString *_taggingSessionId;
    id <IGTVShoppingPinnedProductEditorViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showSkipButton; // @synthesize showSkipButton=_showSkipButton;
@property(readonly, nonatomic) id <IGTVShoppingPinnedProductEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *taggingSessionId; // @synthesize taggingSessionId=_taggingSessionId;
@property(readonly, nonatomic) NSString *priorSubmodule; // @synthesize priorSubmodule=_priorSubmodule;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *mediaPk; // @synthesize mediaPk=_mediaPk;
@property(readonly, nonatomic) NSArray *pinnedProductInfo; // @synthesize pinnedProductInfo=_pinnedProductInfo;
@property(readonly, nonatomic) IGVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) NSArray *taggedProducts; // @synthesize taggedProducts=_taggedProducts;
- (id)initWithTaggedProducts:(id)arg1 videoComposition:(id)arg2 pinnedProductInfo:(id)arg3 mediaPk:(id)arg4 priorModule:(id)arg5 priorSubmodule:(id)arg6 taggingSessionId:(id)arg7 delegate:(id)arg8 showSkipButton:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

