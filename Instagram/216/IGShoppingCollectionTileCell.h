//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageViewDelegate-Protocol.h"
#import "IGShoppingDropsTimerDelegate-Protocol.h"

@class CALayer, IGGradientView, IGImageView, IGShoppingCollectionTileViewModel, IGShoppingDropsTimer, IGUserSession, NSString, UILabel, UIView;
@protocol IGShoppingCollectionTileCellDelegate;

@interface IGShoppingCollectionTileCell : UICollectionViewCell <IGImageViewDelegate, IGShoppingDropsTimerDelegate>
{
    IGShoppingCollectionTileViewModel *_viewModel;
    IGUserSession *_userSession;
    IGImageView *_coverImageView;
    UIView *_videoContainerView;
    UIView *_videoView;
    UILabel *_titleLabel;
    IGGradientView *_gradientView;
    CALayer *_highlightOverlay;
    IGShoppingDropsTimer *_dropsTimer;
    id <IGShoppingCollectionTileCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCollectionTileCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureAccessibility;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)_updateDropsLaunchInfo;
- (void)_setupFooterView;
- (void)_setupGradientView;
- (void)_configureVideoView:(id)arg1;
- (void)_configureVideoPlaybackIfNeeded:(id)arg1 videoManager:(id)arg2 cellWidth:(double)arg3;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)arg1 width:(double)arg2 analyticsModule:(id)arg3 videoManager:(id)arg4 userSession:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

