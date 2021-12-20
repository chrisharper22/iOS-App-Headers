//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FBPayFormViewConfiguration : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_sections;
    NSArray *_layoutInfo;
    NSString *_rightBarButtonTitle;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(readonly, copy, nonatomic) NSArray *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1 sections:(id)arg2 layoutInfo:(id)arg3 rightBarButtonTitle:(id)arg4;

@end

