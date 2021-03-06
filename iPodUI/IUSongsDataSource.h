/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@class NSString;

@interface IUSongsDataSource : IUMediaQueriesDataSource
{
    BOOL _showAlbumConfigured;
    BOOL _showAlbum;
    BOOL _showDurationConfigured;
    BOOL _showDuration;
    int _interfaceOrientation;
    NSString *_syncProgressString;
    int _syncAssetTotalToken;
    BOOL _syncAssetTotalTokenIsValid;
    int _syncCurrentAssetNumberToken;
    BOOL _syncCurrentAssetNumberTokenIsValid;
    unsigned int _syncAssetTotal;
    unsigned int _syncCurrentAssetNumber;
}

+ (id)queryItemPropertiesToFetch;
+ (Class)cellConfigurationClassForAlbumSongs;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;
+ (int)mediaEntityType;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) BOOL showAlbum; // @synthesize showAlbum=_showAlbum;
@property(nonatomic) BOOL showDuration; // @synthesize showDuration=_showDuration;
- (void)_updateSyncProgressString;
- (int)_containingParentEntityType;
- (BOOL)allowsDownloadingAllEntities;
- (BOOL)allowsDeletion;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (unsigned int)requiredEntityCountForSections;
- (void)createGlobalContexts;
- (Class)songCellConfigurationGlobalContextClass;
- (id)countStringFormat;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (Class)cellConfigurationClass;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)dealloc;
- (id)init;

@end

