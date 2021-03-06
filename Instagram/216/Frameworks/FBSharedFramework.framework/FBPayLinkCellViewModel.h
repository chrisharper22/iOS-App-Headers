//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBPayBaseCellViewModel-Protocol.h>

@class NSString;

@interface FBPayLinkCellViewModel : NSObject <FBPayBaseCellViewModel>
{
    _Bool _hasSelectAction;
    NSString *_title;
    NSString *_reuseIdentifier;
    long long _cellType;
    CDUnknownBlockType _selectAction;
    double _cellHeight;
    NSString *_accessibilityLabel;
    NSString *_accessibilityValue;
    NSString *_accessibilityHint;
    unsigned long long _accessibilityTrait;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long accessibilityTrait; // @synthesize accessibilityTrait=_accessibilityTrait;
@property(readonly, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(readonly, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(readonly, nonatomic) _Bool hasSelectAction; // @synthesize hasSelectAction=_hasSelectAction;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 reuseIdentifier:(id)arg2 selectAction:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

