//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class NSString, UILabel;

@interface IGStoryMusicBrowserTabBarButton : IGBouncyButton
{
    UILabel *_label;
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithText:(id)arg1;

@end

