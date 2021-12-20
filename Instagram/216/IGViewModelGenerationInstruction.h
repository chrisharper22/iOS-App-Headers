//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;
@protocol IGListDiffable;

@interface IGViewModelGenerationInstruction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    id <IGListDiffable> _append_viewModel;
    NSString *_append_key;
    id <IGListDiffable> _prepend_viewModel;
    NSString *_prepend_key;
    id <IGListDiffable> _insertAbove_viewModel;
    NSString *_insertAbove_key;
    NSString *_insertAbove_aboveKey;
    id <IGListDiffable> _insertBelow_viewModel;
    NSString *_insertBelow_key;
    NSString *_insertBelow_belowKey;
    NSString *_remove_key;
}

+ (id)removeWithKey:(id)arg1;
+ (id)prependWithViewModel:(id)arg1 key:(id)arg2;
+ (id)insertBelowWithViewModel:(id)arg1 key:(id)arg2 belowKey:(id)arg3;
+ (id)insertAboveWithViewModel:(id)arg1 key:(id)arg2 aboveKey:(id)arg3;
+ (id)appendWithViewModel:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
- (void)matchAppend:(CDUnknownBlockType)arg1 prepend:(CDUnknownBlockType)arg2 insertAbove:(CDUnknownBlockType)arg3 insertBelow:(CDUnknownBlockType)arg4 remove:(CDUnknownBlockType)arg5;

@end
