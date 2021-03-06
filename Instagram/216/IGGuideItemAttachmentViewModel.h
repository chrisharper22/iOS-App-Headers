//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGImageSpecifier, IGStyledString, NSAttributedString, NSString;

@interface IGGuideItemAttachmentViewModel : NSObject
{
    IGStyledString *_styledTitle;
    NSString *_subtitle;
    NSAttributedString *_attributedSecondarySubtitle;
    IGImageSpecifier *_imageSpecifier;
    long long _imageContentMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(readonly, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
@property(readonly, nonatomic) NSAttributedString *attributedSecondarySubtitle; // @synthesize attributedSecondarySubtitle=_attributedSecondarySubtitle;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) IGStyledString *styledTitle; // @synthesize styledTitle=_styledTitle;
- (id)initWithStyledTitle:(id)arg1 subtitle:(id)arg2 attributedSecondarySubtitle:(id)arg3 imageSpecifier:(id)arg4 imageContentMode:(long long)arg5;

@end

