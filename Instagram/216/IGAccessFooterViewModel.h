//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface IGAccessFooterViewModel : NSObject
{
    NSString *_labelText;
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    UIColor *_titleColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, nonatomic) NSString *primaryTitle; // @synthesize primaryTitle=_primaryTitle;
@property(readonly, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (id)initWithLabelText:(id)arg1 primaryTitle:(id)arg2 secondaryTitle:(id)arg3 titleColor:(id)arg4;

@end

