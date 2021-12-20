//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "NSCoding-Protocol.h"

@interface IGShoppingHomePersistedPlaceholderSection : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    long long _contentTileVScroll_contentTileCount;
    _Bool _contentTileVScroll_hasHeader;
    long long _productGrid_productCount;
    _Bool _productGrid_hasHeader;
    long long _guideGrid_guideCount;
    long long _igtvGrid_videoCount;
    _Bool _igtvGrid_hasHeader;
    long long _merchantPreviewSection_merchantCount;
    _Bool _merchantPreviewSection_hasHeader;
}

+ (id)shortcutRibbon;
+ (id)realtimeTray;
+ (id)productHscroll;
+ (id)productGridWithProductCount:(long long)arg1 hasHeader:(_Bool)arg2;
+ (id)merchantPreviewSectionWithMerchantCount:(long long)arg1 hasHeader:(_Bool)arg2;
+ (id)igtvGridWithVideoCount:(long long)arg1 hasHeader:(_Bool)arg2;
+ (id)guideGridWithGuideCount:(long long)arg1;
+ (id)contentTileVScrollWithContentTileCount:(long long)arg1 hasHeader:(_Bool)arg2;
+ (id)contentTileHscroll;
- (void)matchContentTileVScroll:(CDUnknownBlockType)arg1 productGrid:(CDUnknownBlockType)arg2 guideGrid:(CDUnknownBlockType)arg3 igtvGrid:(CDUnknownBlockType)arg4 merchantPreviewSection:(CDUnknownBlockType)arg5 shortcutRibbon:(CDUnknownBlockType)arg6 productHscroll:(CDUnknownBlockType)arg7 contentTileHscroll:(CDUnknownBlockType)arg8 realtimeTray:(CDUnknownBlockType)arg9;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
