//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGNametagViewConfiguration, NSString, UIView;

@interface IGNametagNUXModel : NSObject <IGListDiffable>
{
    long long _namegtagNUXType;
    IGNametagViewConfiguration *_cardConfig;
    NSString *_switchButtonString;
    UIView *_highlightedView;
    NSString *_instructions;
    NSString *_scanButtonTitle;
}

+ (id)scanNUXWithHighlightedView:(id)arg1 instructions:(id)arg2 scanButtonTitle:(id)arg3;
+ (id)customizationNUXWithHighlightedView:(id)arg1 switchButtonString:(id)arg2 instructions:(id)arg3;
+ (id)cardNUXWithHighlightedView:(id)arg1 cardConfig:(id)arg2 instructions:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *scanButtonTitle; // @synthesize scanButtonTitle=_scanButtonTitle;
@property(readonly, copy, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(readonly, copy, nonatomic) NSString *switchButtonString; // @synthesize switchButtonString=_switchButtonString;
@property(readonly, nonatomic) IGNametagViewConfiguration *cardConfig; // @synthesize cardConfig=_cardConfig;
@property(readonly, nonatomic) UIView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(readonly, nonatomic) long long namegtagNUXType; // @synthesize namegtagNUXType=_namegtagNUXType;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)_initWithNametagNUXType:(long long)arg1 highlightedView:(id)arg2 cardConfig:(id)arg3 switchButtonString:(id)arg4 instructions:(id)arg5 scanButtonTitle:(id)arg6;

@end

