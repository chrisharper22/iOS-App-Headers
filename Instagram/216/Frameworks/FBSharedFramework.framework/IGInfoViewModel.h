//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class NSString;

@interface IGInfoViewModel : FBIvarBasedEqualityObject <IGListDiffable>
{
    unsigned long long _subtype;
    NSString *_refresh_title;
    NSString *_refresh_subtitle;
    unsigned long long _refresh_appearanceStyle;
}

+ (id)refreshWithTitle:(id)arg1 subtitle:(id)arg2 appearanceStyle:(unsigned long long)arg3;
+ (id)loading;
+ (id)hidden;
- (void).cxx_destruct;
- (void)matchHidden:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 refresh:(CDUnknownBlockType)arg3;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

