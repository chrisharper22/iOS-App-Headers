//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGStoryEmojiReactionReactorViewModel, UILabel;

@interface IGStoryEmojiReactionUserButton : UIView
{
    IGProfilePictureImageView *_profileImage;
    UILabel *_emojiLabel;
    IGStoryEmojiReactionReactorViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryEmojiReactionReactorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

