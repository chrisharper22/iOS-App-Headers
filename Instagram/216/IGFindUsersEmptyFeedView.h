//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGEmptyFeedView, IGTextButton, UIActivityIndicatorView, UILabel;
@protocol IGFindUsersEmptyFeedViewDelegate;

@interface IGFindUsersEmptyFeedView : UICollectionViewCell
{
    IGEmptyFeedView *_emptyView;
    IGTextButton *_connectButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_socialContextLabel;
    id <IGFindUsersEmptyFeedViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFindUsersEmptyFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startAnimatingSpinner;
- (void)_didPressConnectButton;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

