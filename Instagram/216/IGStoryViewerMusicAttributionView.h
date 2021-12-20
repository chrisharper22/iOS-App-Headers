//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGAudioIndicatorBars, NSAttributedString, UIImageView, UILabel;

@interface IGStoryViewerMusicAttributionView : UIControl
{
    IGAudioIndicatorBars *_audioIndicator;
    UILabel *_textLabel;
    UIImageView *_explicitIcon;
    UIImageView *_chevronImageView;
    _Bool _audioIndicatorVisible;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioIndicatorVisible; // @synthesize audioIndicatorVisible=_audioIndicatorVisible;
@property(nonatomic) _Bool audioIndicatorAnimating;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
