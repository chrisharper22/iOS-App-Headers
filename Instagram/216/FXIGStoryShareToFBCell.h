//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGTapButton, IGTextButton, UIActivityIndicatorView, UIImageView, UILabel, UIView;
@protocol FXIGStoryShareToFBCellDelegate;

@interface FXIGStoryShareToFBCell : UICollectionViewCell
{
    UIView *_separatorView;
    UIView *_largeCircle;
    UIImageView *_fbIcon;
    UILabel *_title;
    UILabel *_subTitle;
    IGTextButton *_shareButton;
    IGTapButton *_closeButton;
    id <FXIGStoryShareToFBCellDelegate> _delegate;
    UIActivityIndicatorView *_spinner;
    _Bool _areAccountsLinked;
    _Bool _showOnlyForUnlinked;
    _Bool _showACSetUpButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showACSetUpButton; // @synthesize showACSetUpButton=_showACSetUpButton;
@property(nonatomic) _Bool showOnlyForUnlinked; // @synthesize showOnlyForUnlinked=_showOnlyForUnlinked;
@property(nonatomic) _Bool areAccountsLinked; // @synthesize areAccountsLinked=_areAccountsLinked;
- (void)_startAnimatingSpinner;
- (void)_hideFXACUpsellView;
- (void)_tapsFXShareButton;
- (void)layoutSubviews;
- (void)configureCellWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

