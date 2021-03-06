//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGImageSpecifier, IGLFKLayout, NSString, UIImage;

@interface IGStoryLayoutFormatVariant : NSObject
{
    IGLFKLayout *_layout;
    NSString *_analyticsString;
    IGImageSpecifier *_icon;
    UIImage *_image;
    NSString *_accessibilityLabel;
}

+ (id)variantWithLayout:(id)arg1 icon:(id)arg2 image:(id)arg3 analyticsString:(id)arg4 accessibilityLabel:(id)arg5;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) IGImageSpecifier *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *analyticsString; // @synthesize analyticsString=_analyticsString;
@property(readonly, nonatomic) IGLFKLayout *layout; // @synthesize layout=_layout;
- (id)initWithLayout:(id)arg1 icon:(id)arg2 image:(id)arg3 analyticsString:(id)arg4 accessibilityLabel:(id)arg5;

@end

