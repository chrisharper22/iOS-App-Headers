//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListSupplementaryViewSource-Protocol.h>

@class IGListSectionController, NSString, UIColor;
@protocol IGListCollectionContext;

@interface IGSeparatorSupplementaryViewSource : NSObject <IGListSupplementaryViewSource>
{
    _Bool _hasTopSeparator;
    _Bool _hasBottomSeparator;
    UIColor *_separatorColor;
    UIColor *_backgroundColor;
    IGListSectionController *_sectionController;
    id <IGListCollectionContext> _collectionContext;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasBottomSeparator; // @synthesize hasBottomSeparator=_hasBottomSeparator;
@property(readonly, nonatomic) _Bool hasTopSeparator; // @synthesize hasTopSeparator=_hasTopSeparator;
@property(readonly, nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(readonly, nonatomic) __weak IGListSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)initWithSectionController:(id)arg1 collectionContext:(id)arg2 hasTopSeparator:(_Bool)arg3 hasBottomSeparator:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
