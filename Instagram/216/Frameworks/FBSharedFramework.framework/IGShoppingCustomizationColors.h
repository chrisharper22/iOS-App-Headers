//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class UIColor;

@interface IGShoppingCustomizationColors : FBValueObject <NSCopying, NSCoding>
{
    UIColor *_accentColor;
    UIColor *_contrastColor;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIColor *contrastColor; // @synthesize contrastColor=_contrastColor;
@property(readonly, copy, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccentColor:(id)arg1 contrastColor:(id)arg2;

@end
