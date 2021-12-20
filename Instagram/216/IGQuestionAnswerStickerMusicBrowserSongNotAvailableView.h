//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGBouncyButton, IGRadioButtonView, NSString, UILabel;
@protocol IGQuestionAnswerStickerMusicBrowserSongNotAvailableViewDelegate;

@interface IGQuestionAnswerStickerMusicBrowserSongNotAvailableView : UIView
{
    IGBouncyButton *_songContentWrapperView;
    CAShapeLayer *_emptyAlbumArtLayer;
    UILabel *_songTitleLabel;
    IGRadioButtonView *_radioButtonView;
    UILabel *_informationLabel;
    _Bool _isSelected;
    id <IGQuestionAnswerStickerMusicBrowserSongNotAvailableViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id <IGQuestionAnswerStickerMusicBrowserSongNotAvailableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapSongContentView:(id)arg1;
@property(copy, nonatomic) NSString *songTitleText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
