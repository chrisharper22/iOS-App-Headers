//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

@class NSString;
@protocol IGSearchBarDelegate, IGSearchBarRightAccessoryButtonDelegate;

@interface IGSearchBarSectionController : IGListBindingSingleSectionController
{
    _Bool _shouldGroupSearchBarAccessibilityElements;
    id <IGSearchBarDelegate> _searchBarDelegate;
    id <IGSearchBarRightAccessoryButtonDelegate> _rightAccessoryButtonDelegate;
    NSString *_searchBarAcessibilityLabel;
    unsigned long long _searchBarAccessibilityTrait;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long searchBarAccessibilityTrait; // @synthesize searchBarAccessibilityTrait=_searchBarAccessibilityTrait;
@property(retain, nonatomic) NSString *searchBarAcessibilityLabel; // @synthesize searchBarAcessibilityLabel=_searchBarAcessibilityLabel;
@property(nonatomic) _Bool shouldGroupSearchBarAccessibilityElements; // @synthesize shouldGroupSearchBarAccessibilityElements=_shouldGroupSearchBarAccessibilityElements;
@property(nonatomic) __weak id <IGSearchBarRightAccessoryButtonDelegate> rightAccessoryButtonDelegate; // @synthesize rightAccessoryButtonDelegate=_rightAccessoryButtonDelegate;
@property(nonatomic) __weak id <IGSearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
- (void)_groupSearchTextfieldBarAccessibilityChildren:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;

@end

