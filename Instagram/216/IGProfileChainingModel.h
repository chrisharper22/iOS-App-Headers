//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGUser, NSArray, NSString;

@interface IGProfileChainingModel : NSObject <IGListDiffable>
{
    _Bool _showEmptyStateIndicatorCell;
    _Bool _showSeeAllButton;
    _Bool _showCloseButton;
    _Bool _showSeparators;
    _Bool _deemphasizeActionButton;
    _Bool _hideScrollCollectionViewCell;
    _Bool _isAutoExpandChaining;
    _Bool _isCurrentUser;
    _Bool _seeAllCardUpsellEnabled;
    IGUser *_user;
    NSString *_bannerTitle;
    NSArray *_chainingAccounts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool seeAllCardUpsellEnabled; // @synthesize seeAllCardUpsellEnabled=_seeAllCardUpsellEnabled;
@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool isAutoExpandChaining; // @synthesize isAutoExpandChaining=_isAutoExpandChaining;
@property(readonly, nonatomic) _Bool hideScrollCollectionViewCell; // @synthesize hideScrollCollectionViewCell=_hideScrollCollectionViewCell;
@property(readonly, nonatomic) _Bool deemphasizeActionButton; // @synthesize deemphasizeActionButton=_deemphasizeActionButton;
@property(readonly, nonatomic) _Bool showSeparators; // @synthesize showSeparators=_showSeparators;
@property(readonly, nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(readonly, nonatomic) _Bool showSeeAllButton; // @synthesize showSeeAllButton=_showSeeAllButton;
@property(readonly, nonatomic) _Bool showEmptyStateIndicatorCell; // @synthesize showEmptyStateIndicatorCell=_showEmptyStateIndicatorCell;
@property(retain, nonatomic) NSArray *chainingAccounts; // @synthesize chainingAccounts=_chainingAccounts;
@property(readonly, copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 bannerTitle:(id)arg2 chainingAccounts:(id)arg3 options:(unsigned long long)arg4 isAutoExpandChaining:(_Bool)arg5 isCurrentUser:(_Bool)arg6;

@end
