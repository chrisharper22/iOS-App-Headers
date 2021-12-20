//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGDiscoveryMapSnapshotter, IGUserSession, UIImageView;
@protocol IGLocationHeaderViewDelegate;

@interface IGLocationHeaderView : UIView
{
    UIImageView *_imageView;
    IGDiscoveryMapSnapshotter *_snapshotter;
    IGUserSession *_userSession;
    id <IGLocationHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLocationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didReceiveTap:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithLocation:(id)arg1 withMapPin:(id)arg2 isStickerPin:(_Bool)arg3;
- (id)initWithSuperviewWidth:(double)arg1 height:(double)arg2 session:(id)arg3;

@end

