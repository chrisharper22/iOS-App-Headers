//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSString;

@interface IGActivityBrandedContentItemConfiguration : NSObject <IGListDiffable>
{
    NSString *_diffIdentifier;
    unsigned long long _unreadCount;
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _iconAsset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long iconAsset; // @synthesize iconAsset=_iconAsset;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUnreadCount:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 iconAsset:(unsigned long long)arg4;

@end

