//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIAccessibilityElement, UIControl, UILabel;

@interface IGTVGalleryPermissionsView : UIView
{
    UILabel *_title;
    UILabel *_description;
    NSArray *_accessibilityItems;
    UIAccessibilityElement *_textAccessibilityElement;
    UIControl *_enablePhotoAccessButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *enablePhotoAccessButton; // @synthesize enablePhotoAccessButton=_enablePhotoAccessButton;
- (void)setFeedIntegrationEnabled:(_Bool)arg1;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
