//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface IGAdEmptyViewButtonConfig : NSObject
{
    NSString *_title;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 font:(id)arg4;

@end
