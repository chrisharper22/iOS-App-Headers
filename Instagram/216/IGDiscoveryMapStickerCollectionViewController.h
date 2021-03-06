//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDiscoveryMapPartialModalSheetContentProvider-Protocol.h"
#import "IGDiscoveryMapStickerCollectionListKitDelegate-Protocol.h"
#import "IGDiscoveryMapStickerCollectionThumbnailPrefetcherDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class IGARLocationEffect, IGDiscoveryMapLoggingContext, IGDiscoveryMapNavigationBar, IGDiscoveryMapStickerCollectionListKit, IGDiscoveryMapStickerCollectionThumbnailPrefetcher, IGUserSession, NSString;
@protocol IGDiscoveryMapStickerCollectionViewControllerDelegate;

@interface IGDiscoveryMapStickerCollectionViewController : IGViewController <IGDiscoveryMapStickerCollectionThumbnailPrefetcherDelegate, IGDiscoveryMapStickerCollectionListKitDelegate, IGDiscoveryMapPartialModalSheetContentProvider, IGGestureHandler>
{
    IGDiscoveryMapStickerCollectionThumbnailPrefetcher *_thumbnailPrefetcher;
    _Bool _initialScrollDone;
    IGUserSession *_userSession;
    IGDiscoveryMapStickerCollectionListKit *_discoveryMapStickerCollectionListKit;
    IGDiscoveryMapLoggingContext *_loggingContext;
    id <IGDiscoveryMapStickerCollectionViewControllerDelegate> _delegate;
    IGDiscoveryMapNavigationBar *_navigationBar;
    IGARLocationEffect *_stickerToAdd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGARLocationEffect *stickerToAdd; // @synthesize stickerToAdd=_stickerToAdd;
@property(retain, nonatomic) IGDiscoveryMapNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak id <IGDiscoveryMapStickerCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showFailToast:(id)arg1;
- (void)stickerCollectionListKitdidTapRetryQuery:(id)arg1;
- (void)stickerCollectionListKit:(id)arg1 didTapSticker:(id)arg2;
- (void)thumbnailPrefetcher:(id)arg1 didFailQuery:(id)arg2;
- (void)thumbnailPrefetcher:(id)arg1 didStartQuery:(id)arg2;
- (void)_addDelayedSticker;
- (void)thumbnailPrefetcher:(id)arg1 didDidSetCollectionID:(id)arg2;
- (void)thumbnailPrefetcher:(id)arg1 didAddCollectedStickerID:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)contentScrollView;
- (double)heightForPartialModalSheet;
- (void)_updateTitle;
- (void)_didTapDismissButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithThumbnailPrefetcher:(id)arg1 userSession:(id)arg2 loggingContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

