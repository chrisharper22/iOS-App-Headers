//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@protocol IGTextViewItemViewModelProtocol;

@interface IGShoppingSearchProductListSectionTitleSectionController : IGListSectionController
{
    id <IGTextViewItemViewModelProtocol> _object;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGTextViewItemViewModelProtocol> object; // @synthesize object=_object;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end
