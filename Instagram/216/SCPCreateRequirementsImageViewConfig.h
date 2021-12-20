//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class UIColor, UIImage;

@interface SCPCreateRequirementsImageViewConfig : NSObject <NSCopying, NSCoding>
{
    UIImage *_image;
    UIColor *_tintColor;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;

@end
