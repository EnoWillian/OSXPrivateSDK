//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserViewController.h>

#import "AccessibilityProtocol.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSScrollViewDelegate.h"
#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"
#import "TNameTextFieldDelegate.h"

@class FI_TListHeaderRowView, FI_TListMoreCell, FI_TListNameField, FI_TListTableColumn, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FI_TListViewController : FI_TBrowserViewController <NSOutlineViewDelegate, NSTableViewDelegate, NSOutlineViewDataSource, NSWindowDelegate, NSMenuDelegate, AccessibilityProtocol, TNameTextFieldDelegate, NSScrollViewDelegate>
{
    FI_TListTableColumn *_genericTextColumn;
    FI_TListTableColumn *_genericDateColumn;
    FI_TListTableColumn *_genericNumericColumn;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_shortDateWithTimeFormatter;
    NSDateFormatter *_mediumDateFormatter;
    NSDateFormatter *_longDateFormatter;
    double _iconSize;
    double _textSize;
    _Bool _showDateModified;
    _Bool _showDateCreated;
    _Bool _showDateLastOpened;
    _Bool _showDateAdded;
    _Bool _showSize;
    _Bool _showKind;
    _Bool _showVersion;
    _Bool _showComments;
    _Bool _showLabel;
    _Bool _useRelativeDates;
    _Bool _calculateAllSizes;
    _Bool _displayingSpotlightAttributes;
    NSMutableDictionary *_columns;
    NSString *_sortColumn;
    FI_TListMoreCell *_moreCell;
    _Bool _recursiveExpansion;
    _Bool _ignoreIncomingCollapses;
    _Bool _updatingColumns;
    _Bool _unbindingViewSettings;
    _Bool _addingItems;
    _Bool _nodesBeingDraggedAreAllAtTheRootLevel;
    _Bool _editing;
    FI_TListNameField *_originalEditedNameField;
    double _floatingHeaderY;
    NSMutableArray *_headerViews;
    set_55a3e8f7 _disclosedNodes;
    FI_TListHeaderRowView *_headerRowView;
    FI_TListHeaderRowView *_bounceHeaderView;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _singleActiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _topActiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _middleActiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _bottomActiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _singleInactiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _topInactiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _middleInactiveSelectionImage;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _bottomInactiveSelectionImage;
    _Bool _isLinen;
    _Bool _showingAnyColorTags;
    _Bool _isResizingColumns;
    unsigned long long _minSizeForExpandedColumns;
    long long _cachedMaximumDepth;
}

@property(nonatomic) _Bool isLinen; // @synthesize isLinen=_isLinen;
@property(nonatomic) unsigned long long minSizeForExpandedColumns; // @synthesize minSizeForExpandedColumns=_minSizeForExpandedColumns;
@property(nonatomic) _Bool isResizingColumns; // @synthesize isResizingColumns=_isResizingColumns;
@property(nonatomic) FI_TListHeaderRowView *bounceHeaderView; // @synthesize bounceHeaderView=_bounceHeaderView;
@property(retain, nonatomic) FI_TListHeaderRowView *headerRowView; // @synthesize headerRowView=_headerRowView;
@property(nonatomic) double floatingHeaderY; // @synthesize floatingHeaderY=_floatingHeaderY;
@property(retain, nonatomic) FI_TListNameField *originalEditedNameField; // @synthesize originalEditedNameField=_originalEditedNameField;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool nodesBeingDraggedAreAllAtTheRootLevel; // @synthesize nodesBeingDraggedAreAllAtTheRootLevel=_nodesBeingDraggedAreAllAtTheRootLevel;
@property(nonatomic) _Bool addingItems; // @synthesize addingItems=_addingItems;
@property(nonatomic) _Bool updatingColumns; // @synthesize updatingColumns=_updatingColumns;
@property(nonatomic) _Bool ignoreIncomingCollapses; // @synthesize ignoreIncomingCollapses=_ignoreIncomingCollapses;
@property(nonatomic) _Bool recursiveExpansion; // @synthesize recursiveExpansion=_recursiveExpansion;
@property(readonly, nonatomic) _Bool displayingSpotlightAttributes; // @synthesize displayingSpotlightAttributes=_displayingSpotlightAttributes;
@property(retain, nonatomic) NSMutableDictionary *columns; // @synthesize columns=_columns;
@property(nonatomic) _Bool calculateAllSizes; // @synthesize calculateAllSizes=_calculateAllSizes;
@property(nonatomic) _Bool useRelativeDates; // @synthesize useRelativeDates=_useRelativeDates;
@property(nonatomic) _Bool showLabel; // @synthesize showLabel=_showLabel;
@property(nonatomic) _Bool showComments; // @synthesize showComments=_showComments;
@property(nonatomic) _Bool showVersion; // @synthesize showVersion=_showVersion;
@property(nonatomic) _Bool showKind; // @synthesize showKind=_showKind;
@property(nonatomic) _Bool showSize; // @synthesize showSize=_showSize;
@property(nonatomic) _Bool showDateAdded; // @synthesize showDateAdded=_showDateAdded;
@property(nonatomic) _Bool showDateLastOpened; // @synthesize showDateLastOpened=_showDateLastOpened;
@property(nonatomic) _Bool showDateCreated; // @synthesize showDateCreated=_showDateCreated;
@property(nonatomic) _Bool showDateModified; // @synthesize showDateModified=_showDateModified;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) FI_TListTableColumn *genericNumericColumn; // @synthesize genericNumericColumn=_genericNumericColumn;
@property(nonatomic) FI_TListTableColumn *genericDateColumn; // @synthesize genericDateColumn=_genericDateColumn;
@property(nonatomic) FI_TListTableColumn *genericTextColumn; // @synthesize genericTextColumn=_genericTextColumn;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)deleteEmptyContainersAfterMove;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (void)expandFolderAndStartEditing:(const struct TFENode *)arg1;
- (void)expandFolderAndStartEditingDetails:(id)arg1;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)allowsDraggingToMoveFilesOut;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)dataForNode:(const struct TFENode *)arg1 identifier:(id)arg2 fromDataSource:(id)arg3;
- (id)getTagsStringForNode:(const struct TFENode *)arg1;
- (id)sizeForNode:(const struct TFENode *)arg1 sizeAll:(BOOL)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (struct TFENode)outlineNodeFromItem:(id)arg1;
- (id)menuForColumnHeaders;
- (void)cmdSpotlightAttribute:(id)arg1;
- (id)suggestedAttributes;
- (void)accessibilityPerformAction:(id)arg1 onCell:(id)arg2;
- (_Bool)shouldSaveAndRestoreScrollDistanceFromTop;
- (void)saveScrollPosition;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)springNowWithNoSpringController;
- (BOOL)outlineView:(id)arg1 shouldAutoExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)checkForTEFFilesInContainer:(const struct TFENode *)arg1;
- (double)widthForColumn:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)outlineView:(id)arg1 didDragTableColumn:(id)arg2;
- (long long)initialFlockingFormation;
- (void)outlineViewColumnDidMove:(id)arg1;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)adjustNameColumnWidthForExpansion;
- (long long)maximumDisclosedDepth;
- (void)updateTableHeaderViewIfNeeded;
- (void)updateGroupTitleViewIfNeeded;
- (void)outlineView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (struct TFENode)parentForNotificationHelper:(id)arg1;
- (void)expandOrCollapseGroup:(const struct TFENode *)arg1;
- (void)expandTopLevelAsNecessary;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)nameFieldWillDraw:(id)arg1;
- (void)nameFieldDidMoveToSuperView:(id)arg1;
- (id)composeThumbnailsIntoICloudFolderIcon:(const struct TFENode *)arg1;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)configureCellViewOfColumn:(long long)arg1 forRowView:(id)arg2 andNode:(const struct TFENode *)arg3;
- (id)colorForCellColumn:(id)arg1 selected:(_Bool)arg2 forNode:(const struct TFENode *)arg3;
- (_Bool)shouldDrawDimmedSizeForNode:(const struct TFENode *)arg1;
- (_Bool)drawEnabled:(const struct TFENode *)arg1;
- (id)makeCellViewWithIdentifier:(id)arg1 owner:(id)arg2 forNode:(const struct TFENode *)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (BOOL)isGroupNode:(const struct TFENode *)arg1;
- (void)refreshNodeSettings:(BOOL)arg1;
@property(nonatomic) _Bool showingAnyColorTags;
- (void)updateColumnConfiguration;
- (void)visibilityForColumnDidChange:(id)arg1 to:(_Bool)arg2;
- (void)resizeColumn:(id)arg1 withEvent:(id)arg2;
- (void)resizeColumnFromRight:(id)arg1 withEvent:(id)arg2;
- (void)resizeColumn:(id)arg1 toWidth:(double)arg2;
- (void)setIsResizing:(_Bool)arg1 column:(id)arg2;
- (void)updateColumnWidthViewSettings;
- (void)setResizeCursorForColumn:(id)arg1;
- (void)adjustFormatterForColumn:(id)arg1;
- (void)adjustSizeStyleFormatForColumn:(id)arg1;
- (void)adjustKindStyleFormatForColumn:(id)arg1;
- (void)adjustDateStyleFormatForColumn:(id)arg1;
- (void)localeChanged;
- (void)updateCellViewFormattersForColumn:(id)arg1;
- (double)longestDateForFormatter:(id)arg1;
- (void)adjustColumnWidthsForLinen;
- (void)addColumnWithName:(id)arg1 withSettings:(id)arg2;
- (void)unbindViewSettings;
- (void)privateBindSettings;
- (void)cmdArrangeByName:(id)arg1;
- (BOOL)commonValidateArrangeBy:(id)arg1;
- (void)cmdToggleVersion:(id)arg1;
- (void)cmdToggleKind:(id)arg1;
- (void)cmdToggleComments:(id)arg1;
- (void)cmdToggleLabels:(id)arg1;
- (void)cmdToggleDateCreated:(id)arg1;
- (void)cmdToggleDateAdded:(id)arg1;
- (void)cmdToggleDateLastOpened:(id)arg1;
- (void)cmdToggleSize:(id)arg1;
- (void)cmdToggleDateModified:(id)arg1;
- (void)helperCmdArrangeBy:(id)arg1;
- (void)setColumnSettings:(id)arg1;
- (id)columnSettings;
- (void)setShowIconPreview:(BOOL)arg1;
- (_Bool)_setShowIconPreviewNoKVO:(BOOL)arg1;
- (void)reloadColumnWithIdentifier:(id)arg1;
- (BOOL)shouldCalculateFolderSizes:(const struct TFENode *)arg1;
- (void)handleDayChange;
- (BOOL)isColumnVisible:(id)arg1;
- (void)setColumnVisibility:(id)arg1 visible:(BOOL)arg2;
- (_Bool)_setTextSizeNoKVO:(double)arg1;
- (void)invalidateLayoutForColumn:(id)arg1;
- (_Bool)_setIconSizeNoKVO:(double)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)selectAll:(id)arg1;
- (unsigned long long)iconToTextGap;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)scrollCoverHeaderViewHorizontally:(double)arg1;
- (void)displayCoverHeaderView:(_Bool)arg1;
- (id)visibleColumnIndices;
- (id)listView;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
@property(retain, nonatomic) NSString *sortColumn;
- (void)invertSortOrder:(id)arg1;
- (void)highlightAndSetSortIndicator:(id)arg1 ascending:(BOOL)arg2;
- (_Bool)closeContainer:(const struct TFENode *)arg1;
- (_Bool)openContainer:(const struct TFENode *)arg1;
- (void)closeTarget;
- (void)openTarget;
- (BOOL)addItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (void)finishAddingItems:(_Bool)arg1 withOperation:(id)arg2;
- (void)checkForUbquityStatusChange;
- (void)updatePropertiesForNodes:(const vector_614ab7ad *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (void)sortAllChildrenForNode:(const struct TFENode *)arg1 collator:(struct SortCollator *)arg2 reload:(BOOL)arg3 maintainSelection:(BOOL)arg4;
- (BOOL)removeItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (BOOL)addItems:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 removeAll:(BOOL)arg3 groupChanges:(struct TGroupChanges *)arg4 withOperation:(id)arg5;
- (BOOL)updateNodesGroup:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3;
- (void)removeGroups:(const struct TFENodeVector *)arg1;
- (id)postProcessOperationOfKind:(int)arg1 forContainer:(const struct TFENode *)arg2;
- (void)reloadNodes:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)reloadColumnForNode:(const struct TFENode *)arg1 matchingProperty:(unsigned long long)arg2;
- (void)updateViewForRow:(long long)arg1 column:(long long)arg2 columnIdentifier:(id)arg3 property:(unsigned long long)arg4 node:(const struct TFENode *)arg5;
- (void)updateCellTextColor:(id)arg1 column:(id)arg2 row:(long long)arg3 node:(const struct TFENode *)arg4;
- (void)didPerformFirstReload;
- (void)reloadData;
- (void)reloadDataForContainerNode:(const struct TFENode *)arg1;
- (void)spotlightAttrSyncComplete:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (_Bool)shouldShowNoDocumentsUI;
- (void)configureScrollView;
- (void)configureIndentation;
- (void)configureRowHeight;
- (double)rowHeightForIconAndText;
- (BOOL)isDateColumn:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(BOOL)arg1;
- (BOOL)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)startEditingSelectedRow;
- (_Bool)node:(const struct TFENode *)arg1 isAChildInViewOfNodes:(const struct TFENodeVector *)arg2;
- (struct CGImage *)newImageForRow:(long long)arg1 outRect:(struct CGRect *)arg2;
- (void)scrollToLeftMargin;
- (void)listViewWillDraw;
- (void)ejectButtonClicked:(id)arg1;
- (void)syncOnActivateIfRemoteTarget;
- (BOOL)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)selectAllNodes;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(BOOL)arg2;
- (id)indexSetForNodes:(const struct TFENodeVector *)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(BOOL)arg2;
- (BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short *)arg2;
- (void)handleDoubleClick:(id)arg1;
- (void)deselectAllNodes;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 inView:(id)arg2;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 inFrame:(struct CGRect *)arg2;
- (struct CGImage *)selectionImageForRowWithPriorRowSelected:(_Bool)arg1 andNextRowSelected:(_Bool)arg2;
- (void)previewPanelDidClose;
- (void)previewPanelDidOpen;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateHighlightForSelectedRows;
- (struct CGImage *)createRestoreImageForNode:(const struct TFENode *)arg1 outRect:(struct CGRect *)arg2;
- (id)makeDragImageForNode:(const struct TFENode *)arg1 includeIcon:(_Bool)arg2 includeText:(_Bool)arg3 outTextFrame:(struct CGRect *)arg4;
- (void)drawDragImageSelectionBubble:(struct CGRect)arg1;
- (id)makeNameCellViewForDragImage:(const struct TFENode *)arg1;
- (struct CGSize)viewScrollersSize;
- (struct CGSize)idealViewSize;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (struct CGRect)thumbnailFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (_Bool)shouldCloseContainer:(const struct TFENode *)arg1;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (id)selectedItems;
- (void)setDataSource:(id)arg1;
- (unsigned int)viewStyle;
- (id)nibName;
- (unsigned long long)typeSelectNodeCount;
- (long long)typeSelectIndexForNode:(const struct TFENode *)arg1;
- (struct TFENode)typeSelectNodeAtIndex:(unsigned long long)arg1;
- (BOOL)isGrouping;
- (struct TGroupManager *)groupManager:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(BOOL)arg2;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (void)removeHeaderView;
- (void)addHeaderView;
- (void)setColumnAutoResizing:(BOOL)arg1;
- (BOOL)containsNode:(const struct TFENode *)arg1;
- (void)aboutToTearDown:(id)arg1;
- (void)browserViewWillMoveToWindow:(id)arg1;
- (void)viewLoaded;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const struct TFENodeVector *)arg3 containerController:(id)arg4;

@end

